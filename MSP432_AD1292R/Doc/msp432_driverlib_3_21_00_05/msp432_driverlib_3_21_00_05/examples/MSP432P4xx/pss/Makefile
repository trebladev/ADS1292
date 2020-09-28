DIRS=${wildcard *}

all:
	@for i in ${DIRS};                  \
	 do                                 \
	     if [ -f $${i}/Makefile ];      \
	     then                           \
	         make -C $${i} || exit $$?; \
	     fi;                            \
	 done

clean:
	@for i in ${DIRS};             \
	 do                            \
	     if [ -f $${i}/Makefile ]; \
	     then                      \
	         make -C $${i} clean;  \
	     fi;                       \
	 done
	@rm -f ${wildcard *~} __dummy__
