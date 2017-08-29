#!/bin/bash

set -e
set -u

compila() {
  for source in *.c; do
    echo "gcc -Wall -std=c99 $source -o `basename $source .c`"
    gcc -Wall -std=c99 $source -o `basename $source .c`
    echo
  done
}

limpa() {
  for source in *.c; do
    echo "Removendo `basename $source .c`"
    rm `basename $source .c`
    echo
  done
}

COMANDO=""
if [ $# -eq 1 ]; then
  COMANDO=$1
fi

if [ "$COMANDO" == "clean" ]; then
  limpa
else
  compila
fi
