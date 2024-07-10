Starting with cmake 3.30.0, a project that directly adds multiple `.qrc` files to the same executable, and relies on `CMAKE_AUTORCC` for the
rcc invocations, as well as `CMAKE_GLOBAL_AUTORCC_TARGET` for the `autorcc` target, fails to configure on Linux.

This is a project reproducing that behavior.
It uses [`vcpkg`](https://github.com/microsoft/vcpkg) and cmake presets for easy configuration.
After installing vcpkg, ensure that`$VCPK_ROOT` points to the vcpkg repo folder, and run `cmake -S .
--preset vcpkg_gcc_make_debug` or `cmake -S .
--preset vcpkg_gcc_ninja_debug` to test.

