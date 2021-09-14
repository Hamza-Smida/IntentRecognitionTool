# Embedded Intent Recognition
Building a simple small intent recognizer command line tool.

# Build Application
mkdir build && cd build

cmake ..

make

# Dependencies
sudo apt update

sudo apt install lcov

sudo apt install gcov

sudo pip install gcovr

# Build Test/Coverage 
cd test && mkdir build && cd build

cmake ..

make init

make

make gtest_run

# Launch gtest binary file
cd build/gtest

./IntentRec_tst

# Exemple command
cd build/src

./IntentRec_run what is the meteo for today ?

./IntentRec_run give me a general truth ?

./IntentRec_run how is the weather in Berlin ?
