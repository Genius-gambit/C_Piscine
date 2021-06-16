cat /etc/passwd | grep -v "^#" | cut -d ':' -f 1 | rev | sort -r | tr "\n" ", " | tr "\n" "," | sed 's/_,/_, /g' | rev | sed 's/ ,/./' | rev | tr -d "\n"
