find . -name "*.sh" | sed 's:.*/::' | sed 's/\.[ˆ.]*$//' | sed "s/\.sh//"
