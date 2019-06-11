cmake_minimum_required(VERSION 3.12)
project(Samavar)

set(CMAKE_CXX_STANDARD 14)

add_executable(Samavar main.cpp Person/Person.cpp Person/Person.h Utilities/MyDate.cpp Utilities/MyDate.h Utilities/MyTime.cpp Utilities/MyTime.h Sports/Sport.cpp Sports/Sport.h TournamentStuf/Team.cpp TournamentStuf/Team.h TournamentStuf/Match.cpp TournamentStuf/Match.h TournamentStuf/Tournament.cpp TournamentStuf/Tournament.h Sports/BBVB.cpp Sports/BBVB.h StoreAndRestore/StoreAndRestore.cpp StoreAndRestore/StoreAndRestore.h Sports/PingPong.cpp Sports/PingPong.h Sports/Wrestling.cpp Sports/Wrestling.h)