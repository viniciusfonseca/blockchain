node:
	g++ -O2 -pthread \
		main.cc \
		core/Node/*.cc \
		core/Blockchain/*.cc \
		core/Block/*.cc \
		core/Transaction/*.cc \
		core/Wallet/*.cc \
		lib/sha256/*.cc \
		-o start_node \

test: