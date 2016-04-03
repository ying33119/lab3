how to compile for question A:
$ make
g++ -c lab3_qA.cpp
g++ -o lab3_qA lab3_qA.o

$ ./lab3_qA
2032


the empirical results and explanation for question B:

results:

$ ./size1000
sort(): 0 seconds
insertion_sort(): 0.015 seconds

$ ./size10000
sort(): 0 seconds
insertion_sort(): 0.67 seconds

$ ./size100000
sort(): 0.046 seconds
insertion_sort(): 67.518 seconds

$ ./size1000000
sort(): 0.421 seconds
insertion_sort(): 6649.6 seconds

由以上結果觀察sort()和insertion_sort()的消耗時間，當須排序的數值越多，兩種方法所需時間相差也越多。
sort()要作logn次巢狀的呼叫，在同一階層的兩個程式呼叫中，每一階層需要O(n)的時間，時間複雜度為O(nlogn)。
insertion_sort()最好情況是升序排列，只需比較(n-1)次；最壞情況則是降序排列，需進行n(n-1)/2次比較，平均
複雜度為O(n^2)。question B的結果驗證了兩種排序法時間複雜度上O(nlogn)和O(n^2)的差異。
