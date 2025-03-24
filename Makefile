test: test1 test2 test3 test4 test5

test5:
	pip install pytest
	pytest -s tests/test_a5.py
