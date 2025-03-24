test: test1 test2 test3 test4 test5

test1:
	gcc tests/test_a1.c -o tests/test_a1
	./tests/test_a1

test2:
	gcc src/a2.c tests/test_a2.c -lm -o tests/test_a2
	./tests/test_a2

test3:
	gcc src/a2.c src/a3.c tests/test_a3.c -lm -o tests/test_a3
	./tests/test_a3

test4:
	gcc src/a2.c src/a3.c src/a4.c -lm -o lf
	./lf > ./data.txt
	pip install numpy pytest
	pytest -s tests/test_a4.py

test5:
	pip install pyyaml pytest
	pytest -s tests/test_a5.py
