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

�ѥH�W���G�[��sort()�Minsertion_sort()�����Ӯɶ��A���ƧǪ��ƭȶV�h�A��ؤ�k�һݮɶ��ۮt�]�V�h�C
sort()�n�@logn���_�����I�s�A�b�P�@���h����ӵ{���I�s���A�C�@���h�ݭnO(n)���ɶ��A�ɶ������׬�O(nlogn)�C
insertion_sort()�̦n���p�O�ɧǱƦC�A�u�ݤ��(n-1)���F���a���p�h�O���ǱƦC�A�ݶi��n(n-1)/2������A����
�����׬�O(n^2)�Cquestion B�����G���ҤF��رƧǪk�ɶ������פWO(nlogn)�MO(n^2)���t���C
