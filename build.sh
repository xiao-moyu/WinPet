#! /bin/sh
project=`pwd`
PATH=''$PATH':/c/codeEnv/VS/MSBuild/Current/Bin'
if [ -d build ];then
    rm -rf build
fi
mkdir build
echo $PATH
cd build
cmake ..
MSBuild.exe mypet.sln
cp ./Debug/mypet.exe $project/mypet.exe