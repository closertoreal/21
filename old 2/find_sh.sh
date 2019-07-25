find . -name "*.sh" -print | rev | cut -d / -f 1 | cut -c4- | rev
