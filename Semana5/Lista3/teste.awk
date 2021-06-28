#!/bin/awk -f
#!/usr/bin/awk -f
BEGIN{system("rm out.txt|touch out.txt;touch var.txt;touch temp.txt")}
{print >"temp.txt";print > "var.txt"
    ;system("gdb decrescente -ex 'run <temp.txt>>out.txt' -ex 'q'");close("temp.txt")}
END{system("rm temp.txt")}
