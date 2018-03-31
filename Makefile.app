
# hello.cをコンパイルして実行
exec:
	gcc -o hello.exe hello.c
	/test1/hello.exe /test1/result.txt

	# 実行結果は、/tmp/　にコピーしておく
	cp -f ./result.txt /tmp/result.txt

clean:
	rm -f hello.o

