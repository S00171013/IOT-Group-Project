import SimpleOpenNI.*;

/*
  This simple program I created to access the RGB and depth images of the Kinect.
  To access the infared image, just enableIR instead of enable RGB and vice versa.
  Then kinect.irWidth() for kinect.rgbWidth() with kinect.irImage() for kinect.rgbImage()
  The option between RGB and IR to be displayed are both interchangeable.
*/

SimpleOpenNI kinect;

void setup() 
{
  size(1280,960); // Sets the windows size
  kinect = new SimpleOpenNI(this);
  // Enable depthMap and RGB Image...
  kinect.enableDepth();
  kinect.enableRGB();
  // Enable mirror
  kinect.setMirror(true);
}

void draw()
{
  kinect.update();
  // Let's draw depthImageMap and RGB Images...
  image(kinect.depthImage(),0,0);
  image(kinect.rgbImage(), kinect.depthWidth(), 0);
}