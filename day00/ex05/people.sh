ldapsearch -Q uid='z*' | grep cn | sort -f -r -b | cut -c 5-
