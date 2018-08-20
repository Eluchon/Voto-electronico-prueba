DIR = -I/usr/lib/

OBJS = main.o myconnection.o personacontroller.o personaviewer.o personadao.o nacionalcontroller.o nacionalviewer.o nacionaldao.o nacionalqueue.o nacionalnode.o nacional.o estadisticadao.o provincialcontroller.o provincialviewer.o provincialdao.o provincialqueue.o provincialnode.o provincial.o municipalcontroller.o municipalviewer.o municipaldao.o municipalqueue.o municipalnode.o municipal.o

main: $(OBJS)
	g++ -Wall $(DIR) $(OBJS) -o /var/www/cgi-bin/main -L/usr/lib -lmysqlcppconn
clean: 
	rm -f $(OBJS)
