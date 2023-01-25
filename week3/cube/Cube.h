#pragma once

namespace polygon{

	class Cube {
		public:
			Cube(); // custom default constructor
			Cube( const Cube & obj  );
			Cube & operator=(const Cube & obj);
			double getVolume();
			double getSurfaceArea();
			void setLength(double length) ;
			

		private:
			double length_;

	};

};




