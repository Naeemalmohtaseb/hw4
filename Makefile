test: test1 test2 test3 test4 test5

test1:
	gcc tests/test_a1.c -o tests/test_a1
	./tests/test_a1

test5:
	pip install pytest
	pytest -s tests/test_a5.py
