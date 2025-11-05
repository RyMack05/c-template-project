# Executables
add_executable(tcpTimeServer  tcp_time_server.c)
add_executable(tcpTimeClient  tcp_time_client.c)
add_executable(udpEchoServer  udp_echo_server.c)
add_executable(udpEchoClient  udp_echo_client.c)

# Link Winsock on Windows; POSIX needs nothing extra.
if(WIN32)
  target_link_libraries(tcpTimeServer ws2_32)
  target_link_libraries(udpEchoServer ws2_32)
  target_link_libraries(udpEchoClient ws2_32)
endif()