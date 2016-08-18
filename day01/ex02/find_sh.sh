find . -name "*.sh" -print | rev | cut -f 1 -d '/' | cut -c4- | rev
