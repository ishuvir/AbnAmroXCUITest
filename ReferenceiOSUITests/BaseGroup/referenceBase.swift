//
//  referenceBase.swift
//  ReferenceiOSUITests
//
//  Created by admin on 03/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest
import EyesXCUI

class referenceBase: XCTestCase {
    var app = XCUIApplication()
    let eyes = Eyes()
    
    let defaultLaunchArguments: [[String]] = {
           let launchArguments: [[String]] = [["-StartFromCleanState", "YES"]]
           return launchArguments
       }()
       
       func launchApp(with launchArguments: [[String]] = []) {
           (defaultLaunchArguments + launchArguments).forEach { app.launchArguments += $0 }
           app.launch()
       }
       
       override func setUp() {
           super.setUp()
           continueAfterFailure = false
           launchApp(with: defaultLaunchArguments)
       }
    
        override func tearDown() {
            super.tearDown()
            app.terminate()
         
        }
    
    func eyeKey()
    {
       //Please enter your applitool key
        eyes.apiKey = "*********"
    }
    
    func abortEyes(){
        
        do {
            try eyes.close()
        } catch {
            eyes.abortIfNotClosed()
        }
    }
    
    func XCTAyncAssert(_ element: XCUIElement)
    {
        let isElementExist = element.waitForExistence(timeout: 10)
        if isElementExist {
            XCTAssertTrue(element.exists)
        }
    }
    
    func XCTAyncAssertEnabled(_ element: XCUIElement)
    {
        let isElementEnabled = element.waitForExistence(timeout: 10)
        if isElementEnabled {
            XCTAssertTrue(element.isEnabled)
        }
    }
    
    func clickElement(_ element: XCUIElement){
        
        let isElementValid = element.waitForExistence(timeout: 10)
        if isElementValid {
            element.tap()
        }
    }
    
    func XCTAyncAssertText(_ element: XCUIElement , euroText: String)
    {
        let isElementTextVerified = element.waitForExistence(timeout: 10)
        if isElementTextVerified {
            XCTAssertEqual(element.label,euroText)
        }
    }
    
    func portraitOrientation(){
        let device = XCUIDevice.shared
        device.orientation = UIDeviceOrientation.portrait
        print("Device is in Portrait")
    }
    
    func landscapeOrientation(){
        let device = XCUIDevice.shared
        device.orientation = UIDeviceOrientation.landscapeLeft
        print("Device is in LandscapeLeft orientation")
    }
    
    
    func getCurrencyValue(_ element: XCUIElement) -> Double {
        let euroValue = element.label as? String ?? ""
        print("Currency value: " + euroValue )
        let formatter = NumberFormatter()
        formatter.numberStyle = .currency
        formatter.locale = Locale(identifier: "nl_NL")
        let number = formatter.number(from: euroValue)
        let doubleValue = number?.doubleValue
     //   print(doubleValue ?? "")
         print(doubleValue!)
        return doubleValue!
    }
    
}



