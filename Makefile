all:a.out TAGS

a.out:a.cpp
	g++ -g3 -o $@ $<

TAGS:
	mktags.exe -e a.out

clean:
	rm -f a.out b.out *~ *.j TAGS
