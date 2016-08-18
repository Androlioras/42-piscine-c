cat /etc/passwd | grep -E -v '^(#)' | cut -d':' -f1 | sed '1!n;d' | rev | sort -r | awk '{if(NR > "'"$FT_LINE1"'" && NR < "'"$FT_LINE2"'") print $0}' | tr '\n' ',' | sed 's/\(.*\),/\1 /' | tr ' ' '.'
