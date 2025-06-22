#include<stdio.h>
void main(){
	
	int room_area=144;
	int Square_cm;
	int Tile_area;
	int No_of_Tile;
	// To Convert Square meter to square cm
	
	Square_cm = room_area*10000;
	
	// To Calculate area of tiles 
	
	Tile_area =12*12;
	
	// To calculate No. Of Tile
	
	No_of_Tile = Square_cm/Tile_area;
	
	printf("Number of Tiles req : %d",No_of_Tile);
	
}
