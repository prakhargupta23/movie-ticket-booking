all:
	g++ main.cpp database.cpp user.cpp movie.cpp booking.cpp ui.cpp -o movie_booking -lmysqlclient

clean:
	rm -f movie_booking
