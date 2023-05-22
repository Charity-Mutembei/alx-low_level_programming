gcc -shared -o libgmhack.so -fPIC gm
export LD_PRELOAD=$PWD/libgmhack.so
