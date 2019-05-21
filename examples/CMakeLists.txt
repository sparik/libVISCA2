ADD_EXECUTABLE(visca_cli visca_cli.cpp)
ADD_EXECUTABLE(testvisca testvisca.cpp)
TARGET_LINK_LIBRARIES(visca_cli visca)
TARGET_LINK_LIBRARIES(testvisca visca)
INSTALL(TARGETS visca_cli RUNTIME DESTINATION bin)
INSTALL(TARGETS testvisca RUNTIME DESTINATION bin)

set_target_properties(visca_cli PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(testvisca PROPERTIES LINKER_LANGUAGE CXX)