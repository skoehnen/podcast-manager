CMAKE_MINIMUM_REQUIRED ( VERSION 3.2.1 )
PROJECT ( podcast-manager )

ADD_EXECUTABLE( testprg main.cpp )
TARGET_LINK_LIBRARIES( testprg curl )
