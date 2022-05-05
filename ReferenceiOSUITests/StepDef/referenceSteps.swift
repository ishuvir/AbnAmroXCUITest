//
//  referenceSteps.swift
//  ReferenceiOSUITests
//
//  Created by admin on 03/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//


import Foundation
import XCTest
import EyesXCUI


extension referenceBase {
    func givenAppIsReady() {
        XCTContext.runActivity(named: "Given App is ready ") { _ in
            XCTAyncAssertEnabled(referencePage.ButtonType.element)
            
        }
    }
       
    func givenDeviceIsPortrait() {
        XCTContext.runActivity(named: "App Is portrait ") { _ in
            portraitOrientation()
        }
    }
    
    func givenAppIsReadyInPortrait(){
        givenDeviceIsPortrait()
        givenAppIsReady()
    }
    
    func whenDeviceChangedToLandscape() {
        XCTContext.runActivity(named: "Device changed to landscape ") { _ in
            landscapeOrientation()
        
        }
    }
    
    func thenHelloIsDisplayed() {
        XCTContext.runActivity(named: "Then Hello is displayed") { _ in
            XCTAyncAssert(referencePage.welcomeMessage.element)
        }
        XCTContext.runActivity(named: "Then Heading is verified") { _ in
            XCTAyncAssert(referencePage.headingText.element)
        }
        
        
    }
    
    func givenAppIsOpened() {
        XCTContext.runActivity(named: "Then Hello is displayed") { _ in
            eyeKey()
            eyes.open(withApplicationName: "ReferenceiOS", testName: "Reference APP Visual Check")
            eyes.check(withTag: "Hello/Button", andSettings: Target.window().timeout(inSeconds: 5))
        }
        
        
    }
    
    func ThenEyesCapturedScreen() {
        XCTContext.runActivity(named: "EYES Screen is captured") { _ in
            eyes.checkWindow(withTag: "Clicked & currency")
            abortEyes()
        }
        
        
    }
    
    func andHelloIsDisplayed() {
        XCTContext.runActivity(named: "Hello is displayed") { _ in
            XCTAyncAssert(referencePage.welcomeMessage.element)
        }
    }
    
    
    
    func thenFirstTextIsMatched(textValue : String ) {
        XCTContext.runActivity(named: "Then I should see Hello initially ") { _ in
            XCTAyncAssertText(referencePage.euroTextField.element, euroText: textValue)
        }
    }
    
    func thenButtonIsDisplayed() {
        XCTContext.runActivity(named: "Then I should see Button ") { _ in
            XCTAyncAssert(referencePage.ButtonType.element)
        }
    }
    
    func whenUserClickedButton() {
        XCTContext.runActivity(named: "clicked on Button ") { _ in
            XCTAyncAssertEnabled(referencePage.ButtonType.element)
            clickElement(referencePage.ButtonType.element)
        }
    }
    
    
    func whenMutlipleButtonPressed() {
        XCTContext.runActivity(named: "clicked on Button ") { _ in
            for i in stride(from: 1, to: 3, by: 1) {
                print("Button Press count" , i)
                clickElement(referencePage.ButtonType.element)
            }
        }
    }
    
    
    func thenHelloIsNotDisplayed(initialText : String) {
        XCTContext.runActivity(named: "Hello is no longer displayed ") { _ in
            XCTAyncAssert(referencePage.euroTextField.element)
            XCTAssertNotEqual(referencePage.euroTextField.element.label as? String, initialText)
        }
    }
    
    func thenEuroValueDisplayed(euroIcon : String) {
        XCTContext.runActivity(named: "Value with Euro symbol is displayed ") { _ in
            let euroValue = referencePage.euroTextField.element.label as? String ?? ""
            let euroValueResult = euroValue.contains(euroIcon)
            print(euroValueResult)
            XCTAssertTrue(euroValueResult)
            print("Euro value displayed  " + referencePage.euroTextField.element.label)
        }
        
        }
    
    func thenEuroValueDiffer() {
        XCTContext.runActivity(named: "Each Value differ on click of button") { _ in
            let beforeValue=getCurrencyValue(referencePage.euroTextField.element)
            print("euro value before  ",  beforeValue)
            clickElement(referencePage.ButtonType.element)
            let afterValue=getCurrencyValue(referencePage.euroTextField.element)
            print("euro value After   " , afterValue)
            XCTAssertNotEqual(beforeValue, afterValue)
           }
        
        }
    
      func thenCurrencyRangeIsVerified(){
          XCTContext.runActivity(named: "Verifing Currency range") { _ in
              let valueRangeStatus = (100..<99999999).contains(getCurrencyValue(referencePage.euroTextField.element))
               XCTAssertTrue(valueRangeStatus)
          }
    }
        
        func thenFunctionalityIsVerified(){
            XCTContext.runActivity(named: "Functionality Is verified in landscape") { _ in
            thenHelloIsNotDisplayed(initialText : "Hello" )
            thenEuroValueDisplayed(euroIcon : "€" )
                thenEuroValueDiffer()
                portraitOrientation()
            }
        }
        
  
    
}

