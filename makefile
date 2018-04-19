Escalon_movil.png Gauss.png: graph_escalon.py gauss.cpp graph_gauss.py escalon.cpp
		c++ escalon.cpp
		./a.out>por.txt
		python graph_escalon.py
		
		c++ gauss.cpp
		./a.out>por.txt
		python graph_gauss.py
