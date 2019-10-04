all:
	g++ -o blockchain \
		main.cc \
		core/Block/*.cc \
		core/Blockchain/*.cc \
		core/Transaction/*.cc \
		core/Node/*.cc \
		core/Wallet/*.cc \
		core/sha256/*.cc
