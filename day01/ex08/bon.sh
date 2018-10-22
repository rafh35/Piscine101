ldapsearch -Q 'sn=*bon*'| grep sn | grep -v '#'| wc -l | tr -d ' '
