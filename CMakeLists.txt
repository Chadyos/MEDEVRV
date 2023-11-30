 
# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)


project(Battleship)

# On indique que l'on veut un exécutable "toto" compilé à partir des fichiers
add_executable(Battleship src/*.cpp)
include_directories (include)
