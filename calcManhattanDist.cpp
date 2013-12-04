void calcManhattanDist(float &x1, float &y1, float &z1,float &x2, float &y2, float &z2)
{
  
  float dm= -1.0;

  dm= abs (x2-x1)+abs (y2-y1)+abs (z2-z1);
  
  printf("The Euclidean distance between ( %10.4f, %10.4f, %10.4f ) and ( %10.4f, %10.4f, %10.4f ) is %10.4f.\n", x1, y1, z1, x2, y2, z2, dm);

}
