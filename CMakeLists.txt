set(PROJ_NAME "GameEngine")

project(${PROJ_NAME})

include_directories(
  "${PROJECT_SOURCE_DIR}/include"
)

set(SOURCE_FILES
  "src/Core/main.cpp"
  "src/Core/Game.cpp"
)

add_executable(${PROJ_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJ_NAME} SDL2)