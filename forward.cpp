void Forward( float th1, float th2, float th3,  float l1, float l2,
	 glm::mat4& m1g, glm::mat4& m2g, glm::mat4& m3g )
{

	//Possisioning Part 1 with respect to the ground
	m1g = glm::rotate(m1g, th1, glm::vec3(1, 1, 0));												//rotate by th1 on the x, y axis
	//NOTE: We are are keeping the first pivot point against the ground so there is no need to translate


	//Possisioning Part 2 with respect to the ground
	m2g = glm::translate(m2g, glm::vec3(l1*cos(th2), l1*sin(th2), 0)); 			//translate by l1
	m2g = glm::rotate(m2g, th2, glm::vec3(1, 1, 0));												//rotate by th2 on the x, y axis
	m2g = m1g * m2g;																												//Multiply m1g to m2g

	//Possisioning Part 3 with respect to the ground
	m3g = glm::translate(m3g, glm::vec3(l2*cos(th3), l2*sin(th3), 0)); 			//translate by l2
	m3g = glm::rotate(m3g, th3, glm::vec3(1, 1, 0));												//rotate by th3 on the x, y axis
	m3g = m1g * m2g * m3g;																									//Multiply m1g and m2g to m3g

}

void WhoAmI( std::string &yourName, std::string &yourEmailAddress )
{
        yourName = "Andrew Snow";
        yourEmailAddress = "snowan@oregonstate.edu" ;
}
