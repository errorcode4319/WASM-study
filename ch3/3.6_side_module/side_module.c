#include <emscripten.h>

//https://githubmemory.com/repo/gwsounddsg/WasmTesting/issues/2
//zsh: no matches found: EXPORTED_RUNTIME=[]

int Increment(int value) {
    return (value + 1);
}