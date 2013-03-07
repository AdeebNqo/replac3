#Simple makefile for replac3
replac3: main.cpp
	@g++ -o replac3 main.cpp
install:
	@echo Installing replac3
	@chmod u+x replac3
	@sudo mv replac3 /usr/bin
	@echo Done installing replac3!
uninstall:
	@echo uninstalling replac3
	@sudo rm /usr/bin/replac3
	@echo Done uninstalling replac3!
