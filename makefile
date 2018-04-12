ErrorSegundoOrden.png ErrorPrimerOrden.png : Error.py First.txt Error2.py Second.txt
	python3 Error.py 
	python3 Error2.py
First.txt Second.txt: FODE SODE
	./SODE>First.txt
	./FODE>Second.txt
SODE FODE : Diff.cpp Diff2.cpp       
	c++ Diff.cpp -o SODE
	c++ Diff2.cpp -o FODE