# Add the headers
include_directories( include )

# Add all *.c* files as source code
file(GLOB SrcFiles *.c*)
add_library(Galil SHARED ${SrcFiles}) 
if(APPLE)
target_link_libraries(Galil /Applications/gclib/dylib/gclib.0.dylib /Applications/gclib/dylib/gclibo.0.dylib)
else()
target_link_libraries(Galil gclib gclibo)
endif()
