server:
	g++ -pthread -o server \
		server.cc

all:
	g++ -o blockchain \
		main.cc \
		core/Block/*.cc \
		core/Blockchain/*.cc \
		core/Transaction/*.cc \
		core/Node/*.cc \
		core/Wallet/*.cc \
		lib/sha256/*.cc