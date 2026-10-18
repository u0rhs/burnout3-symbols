<sub>[Home](../../README.md) › [Formats](README.md)</sub>

# CodeWarrior C++ name mangling

The Burnout 2 executable's symbols and its DWARF `0x2008` attributes use Metrowerks' mangling, which is
the old cfront/ARM scheme, not the Itanium one that `c++filt` decodes. The Burnout 3 maps are already
demangled. [`tools/cwdemangle.py`](../../tools/cwdemangle.py) implements the rules below.

## Shape

```
<name>__<class><qualifiers>F<parameters>
```

| Example | Meaning |
|---|---|
| `Init__15CVehiclePhysicsFv` | `CVehiclePhysics::Init()` |
| `Get__5CTestCFv` | `CTest::Get() const` (`C` before `F`) |
| `UnwindStack__FP12ThrowContextP13ExceptionInfoPc` | free function `UnwindStack(ThrowContext*, ExceptionInfo*, char*)` |
| `mInstance__5CTest` | static data member `CTest::mInstance` (no `F`) |
| `__vt__11CScreenFade` | the vtable of `CScreenFade` |
| `__RTTI__11CScreenFade` | its RTTI record |

The class is `<length><name>`, or `Q<n>` followed by `n` such names for nested classes (`Q_<n>_` for
ten or more). The demangler tries each `__` from the left until the rest parses, because names can
contain `__` themselves.

## Special names

| Mangled | C++ | Mangled | C++ |
|---|---|---|---|
| `__ct` | constructor | `__dt` | destructor |
| `__as` | `operator=` | `__eq` / `__ne` | `==` / `!=` |
| `__pl` / `__mi` / `__ml` / `__dv` | `+ - * /` | `__apl` / `__ami` / `__amu` / `__adv` | `+= -= *= /=` |
| `__vc` | `operator[]` | `__cl` | `operator()` |
| `__nw` / `__dl` | `new` / `delete` | `__nwa` / `__dla` | `new[]` / `delete[]` |
| `__op<type>` | conversion operator | `__lt` `__gt` `__le` `__ge` | `< > <= >=` |

## Types

| Code | Type | Code | Type |
|---|---|---|---|
| `v` | void | `P<t>` | pointer to t |
| `c` | char | `R<t>` | reference to t |
| `s` | short | `C<t>` | const t |
| `i` | int | `V<t>` | volatile t |
| `l` | long | `U<t>` / `S<t>` | unsigned / signed t |
| `x` | long long | `A<n>_<t>` | array of n t |
| `f` | float | `F<params>_<ret>` | function |
| `d` | double | `M<class><t>` | pointer to member |
| `r` | long double | `<n><name>` | a class or enum |
| `b` | bool | `T<k>` | same type as parameter k (1-based) |
| `w` | wchar_t | `N<count><k>` | parameter k repeated count times |
| `e` | `...` | | |

## Not handled

Template arguments are kept as they appear in the name. Anything that fails to parse is left mangled
in the output; in Burnout 2 these are only non-C++ names such as `__ps2_libinfo__` and `.p__sinit_*`.
