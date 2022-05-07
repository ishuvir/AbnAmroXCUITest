# AbnAmroXCUITest
iOS assignment is performed using XCUITest native (iOS testing framework)

**Tools used in achieving automation**
--
* XCUITest
* Xcode 13.2.1
* applitool
* Xcode Simulator
* GitHUB
* Travis CI / XCODE CI (Server & Bot)

**Language**
--
Swift 


**Framework Structure **
--
* Framework structure styling: BDD (Behaviour driven development)
* Framework model : POM 

<img width="267" alt="image" src="https://user-images.githubusercontent.com/59482260/166935328-bb5af292-cb22-4aff-9534-9e3c6d2b7d3c.png">

Reference app Elements: locators & function
Step Def : test function implementation
reference App test: Test scenarios
BaseGroup : Base Functions

**Test Scenario's**

* UI Screen validation
* Euro value changing validation
* Button function test
* Device orientation test
* Euro value range validation
* applitool eyes test (disabled as need key to run in applitool so key value is blank and test is disabled)

Information about applitool :  https://eyes.applitools.com/ - Able to run locally and verified the run in applitool

<img width="610" alt="image" src="https://user-images.githubusercontent.com/59482260/166937729-12ae2048-b3c5-48e9-92b3-e1d6ed8ca88e.png">

**Steps to execute**
--
1. clone the project
2. Launch the xcode and Open `ReferenceiOS.xcworkspace`
3. Or launch terminal, the cd path to xcode project
4. Run below command to execute the test with help of `fastlane`

`fastlane scan —scheme ReferenceiOS —device  “Add Device Name”`
  
  or 
                   
`fastlane ios test_ui`
  
**  Note: To use applitool test with other UI test perform below steps**
  
  1. clone the project
  2. Open terminal & then cd path to this xcode project
  3. `xcode-select --install`
  4. `sudo gem install cocoapods` (if seeing issue , please update or install ruby and use it as default) 
  5. `Pod install` (can perform `vim Podfile` if podfile doesnt exist)
  
  
 ** Remote Execution -->** XCUITest can be executed on any Ci as its working using terminal, linked Travis CI for execution 
  
** Change in Reference app**
--

* Added the label with static text "Random Value"  

<img width="320" alt="Screenshot 2022-05-05 at 16 13 05" src="https://user-images.githubusercontent.com/59482260/166942511-72c5816a-e301-4be2-bdeb-3386f166db62.png">



 
