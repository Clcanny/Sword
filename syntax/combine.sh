#/bin/bash
cp Declaration syntax.y
find . -type f -name '*.syntax.y' -exec cat {} + >> syntax.y
mv syntax.y ../syntax.y
