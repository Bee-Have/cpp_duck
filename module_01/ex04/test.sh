#!/bin/bash

make re

YELLOW="\e[33m"
GREEN="\e[32m"
END="\e[0m"

if [ $1 -eq 1 ]; then
	export LEAK="valgrind --leak-check=full --show-leak-kinds=all"
fi

echo "${YELLOW}\n REPLACING [.] by [ duck] in [./text/simple.txt]${END}"
$LEAK ./replace ./text/simple.txt . " duck"
echo "${GREEN}RESULTS can be found in -> [./text/simple.txt.replace]${END}"

echo "${YELLOW}\n REPLACING [ ] by [.] in [./text/simple.txt.replace]${END}"
$LEAK ./replace ./text/simple.txt.replace " " "."
echo "${GREEN}RESULTS can be found in -> [./text/simple.txt.replace.replace]${END}"

echo "${YELLOW}\n REPLACING [duck] by [duckduck] in [./text/simple.txt.replace.replace]${END}"
$LEAK ./replace ./text/simple.txt.replace.replace duck duckduck
echo "${GREEN}RESULTS can be found in -> [./text/simple.txt.replace.replace.replace]${END}"

echo "${YELLOW}\n REPLACING [\\\n] by [ ] in [./text/callOfCthulhu.txt]${END}"
$LEAK ./replace ./text/callOfCthulhu.txt "
" " "
echo "${GREEN}RESULTS can be found in -> [./text/callOfCthulhu.txt.replace]${END}"

echo "${YELLOW}\n REPLACING [,] by [VIRGULE] in [./text/callOfCthulhu.txt.replace]${END}"
$LEAK ./replace ./text/callOfCthulhu.txt.replace "," "VIRGULE"
echo "${GREEN}RESULTS can be found in -> [./text/callOfCthulhu.txt.replace.replace]${END}"

echo "${YELLOW}\n REPLACING [Lorem ipsum dolor sit amet] by [random gibberish] in [./text/loremIpsum.txt]${END}"
$LEAK ./replace ./text/loremIpsum.txt "Lorem ipsum dolor sit amet" "random gibberish"
echo "${GREEN}RESULTS can be found in -> [./text/loremIpsum.txt.replace]${END}"

echo "${YELLOW}\n REPLACING [] by [] in [./text/loremIpsum.txt.replace]${END}"
$LEAK ./replace ./text/loremIpsum.txt.replace "" ""
echo "${GREEN}RESULTS can be found in -> [./text/loremIpsum.txt.replace.replace]${END}"

echo "${YELLOW}\n REPLACING [ ] by [.] in [./text/Nightmare.txt]${END}"
$LEAK ./replace ./text/Nightmare.txt " " "."
echo "${GREEN}RESULTS can be found in -> [./text/Nightmare.txt.replace]${END}"

echo "${YELLOW}\n REPLACING [Hello there General Kenobi] by [] in [./text/oneSentence.txt]${END}"
$LEAK ./replace ./text/oneSentence.txt "Hello there General Kenobi" ""
echo "${GREEN}RESULTS can be found in -> [./text/oneSentence.txt.replace]${END}"

echo "${YELLOW}\n REPLACING [] by [HEY THERE *wink*] in [./text/oneSentence.txt.replace]${END}"
$LEAK ./replace ./text/oneSentence.txt.replace "" "HEY THERE *wink*"
echo "${GREEN}RESULTS can be found in -> [./text/oneSentence.txt.replace.replace]${END}"

echo "${YELLOW}\n REPLACING [whole text] by [fearlesspasteque] in [./text/Nightmare.txt.replace]${END}"
$LEAK ./replace ./text/Nightmare.txt.replace "$(cat ./text/Nightmare.txt.replace)" "fearlesspasteque"
echo "${GREEN}RESULTS can be found in -> [./text/Nightmare.txt.replace.replace]${END}"
