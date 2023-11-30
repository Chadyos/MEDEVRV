 
# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)


project(Battleship)

file(GLOB_RECURSE
  source_files
  src/*
  include/*
)

# On indique que l'on veut un exécutable "toto" compilé à partir des fichiers
add_executable(Battleship ${source_files})
include_directories (include)
