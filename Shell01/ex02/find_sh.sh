ext=sh
find . -name "*.$ext" -execdir basename {} .sh ';'
