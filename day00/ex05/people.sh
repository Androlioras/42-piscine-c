ldapsearch -LLL -Q "uid=z*" cn | sed -n '/cn/p' | cut -c4- | sort -r | sed "s/ //"
