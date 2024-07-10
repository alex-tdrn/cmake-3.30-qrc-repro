add_executable(repro_exe WIN32)
target_sources(repro_exe PRIVATE main.cpp hello_world_1.qrc hello_world_2.qrc)

target_link_libraries(repro_exe PUBLIC Qt6::Core)
