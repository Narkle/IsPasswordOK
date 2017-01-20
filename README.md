# IsPasswordOK

#Compiling command
g++ IsPasswordOK.cpp PassCheck.cpp -o IsPasswordOK

#Coverity Scan build command
cov-build --dir cov-int g++ IsPasswordOK.cpp PassCheck.cpp -o IsPasswordOK -fno-stack-protector